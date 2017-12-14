<li class="nLi" ><!--<li class="nLi on">-->
        <h3><a href="{dede:field name='typeurl'/}">{dede:field name='typename'/}</a></h3>
        <ul class="sub">
          {dede:channel type='son' noself='yes'}
          <li><a href="[field:typelink/]">[field:typename/]</a></li>
          {/dede:channel}
        </ul>
      </li>