class AtividadeDividendo {
  public static void main(String[] args) {
    
    double Pl,Pvp,preco_enat=11.25,preco_itsa=9.49,preco_wege=64.84,dividendo,Lpa_enat=1.31,Vpa_enat=10.95,Lpa_itsa=0.83,Vpa_itsa=6.29,Lpa_wege=0.89,Vpa_wege=4.94,dividendosPagos_enat=1.1427,dividendosPagos_itsa=0.5494,dividendosPagos_wege=0.44;

    System.out.println("Preco da acao da ENAT3 31/08/2020:R$ " + String.format("%.2f",preco_enat));

    System.out.println("Preco da acao da ITSA4 31/08/2020:R$ " + String.format("%.2f",preco_itsa));

    System.out.println("Preco da acao da WEGE3 31/08/2020:R$ " + String.format("%.2f",preco_wege));

    dividendo= (dividendosPagos_enat/preco_enat)*100;
    System.out.println("Dividend Yield ENAT3 31/08/2020: "+String.format("%.2f",dividendo)+"%");

    dividendo = (dividendosPagos_itsa/preco_itsa)*100;
    System.out.println("Dividend Yield ITSA4 31/08/2020: "+String.format("%.2f",dividendo)+"%");
    
    dividendo = (dividendosPagos_wege/preco_wege)*100;
    System.out.println("Dividend Yield WEGE3 31/08/2020: "+String.format("%.2f",dividendo)+"%");

    Pl= preco_enat/Lpa_enat;
    System.out.println("P/L ENAT3 31/08/2020:R$ "+String.format("%.2f",Pl));

    Pl=preco_itsa/Lpa_itsa;
    System.out.println("P/L ITSA4 31/08/2020:R$ "+String.format("%.2f",Pl));

    Pl=preco_wege/Lpa_wege;
    System.out.println("P/L WEGE3 31/08/2020:R$ "+String.format("%.2f",Pl));

    Pvp=preco_enat/Vpa_enat;
    System.out.println("P/VP ENAT3 31/08/2020:R$ "+String.format("%.2f", Pvp));
    
    Pvp=preco_itsa/Vpa_itsa;
    System.out.println("P/VP ITSA4 31/08/2020:R$ "+String.format("%.2f", Pvp));

    Pvp=preco_wege/Vpa_wege;
    System.out.println("P/VP WEGE3 31/08/2020:R$ "+String.format("%.2f", Pvp));
    
    

   
  }
}